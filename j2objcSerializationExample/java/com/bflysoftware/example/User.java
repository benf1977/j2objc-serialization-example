package com.bflysoftware.example;

import java.io.ByteArrayInputStream;
import java.io.ByteArrayOutputStream;
import java.io.IOException;
import java.io.ObjectInputStream;
import java.io.ObjectOutputStream;
import java.io.ObjectStreamException;
import java.io.Serializable;

import java.util.Arrays;

/**
 * Created by benjamin.flynn on 10/7/15.
 */
public class User implements Serializable {
    
    private String mName;
    private int mAge;
    
    public static User UserFromBytes(byte[] bytes) {
        if (bytes == null) return null;
        User user = null;
        try (ByteArrayInputStream byteInputStream = new ByteArrayInputStream(bytes);
             ObjectInputStream objectInputStream = new ObjectInputStream(byteInputStream);){
            Object object = objectInputStream.readObject();
            if (object instanceof User) {
                user = (User)object;
            }
        } catch (IOException | ClassNotFoundException e) {
            System.err.println("Aww rats: " + e);
        }
        return user;
    }
    
    public User() {
        
    }
    
    public User(String pName, int pAge) {
        mName = pName;
        mAge = pAge;
    }
    
    public String getName() {
        return mName;
    }
    
    public int getAge() {
        return mAge;
    }
    
    public Object writeReplace() throws ObjectStreamException {
        return this;
    }
    
    public void runTest() {
        byte[] serialized = this.bytes();
        System.out.println("serialized: " + Arrays.toString(serialized));
    }
    
    public byte[] bytes() {
        byte[] bytes = null;
        try (ByteArrayOutputStream byteOutputStream = new ByteArrayOutputStream();
             ObjectOutputStream objectOutputStream = new ObjectOutputStream(byteOutputStream);) {
            objectOutputStream.writeObject(this);
            bytes = byteOutputStream.toByteArray();
        } catch (IOException ioe) {
            System.err.println("Aww snap: " + ioe);
        }
        return bytes;
    }
    
    public static void main(String argv[])
    {
        User user = new User("Daryl", 40);
        user.runTest();
    }
}