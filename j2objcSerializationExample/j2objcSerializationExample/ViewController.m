//
//  ViewController.m
//  j2objcSerializationExample
//
//  Created by Benjamin Flynn on 10/12/15.
//  Copyright © 2015 b.bfly. All rights reserved.
//

#import "ViewController.h"

#import "User.h"

@interface ViewController ()

@property (nonatomic, weak) IBOutlet UILabel        *label;

@end

@implementation ViewController

- (void)viewWillAppear:(BOOL)animated
{
    [super viewWillAppear:animated];
    ComBflysoftwareExampleUser *user = [[ComBflysoftwareExampleUser alloc] initWithNSString:@"Daryl" withInt:47];
    [user bytes];
}

@end
