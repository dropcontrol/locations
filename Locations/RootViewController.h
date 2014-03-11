//
//  RootViewController.h
//  Locations
//
//  Created by hiroshi yamato on 3/11/14.
//  Copyright (c) 2014 Alliance Port, LLC. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreLocation/CoreLocation.h>

@interface RootViewController : UITableViewController <CLLocationManagerDelegate>

@property (nonatomic) NSMutableArray *eventArray;
@property (nonatomic) NSManagedObjectContext *managedObjectContext;
@property (nonatomic) CLLocationManager *locationManager;
@property (nonatomic) UIBarButtonItem *addButton;

- (void)addEvent;

@end
