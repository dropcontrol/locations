//
//  LOCAppDelegate.h
//  Locations
//
//  Created by hiroshi yamato on 3/6/14.
//  Copyright (c) 2014 Alliance Port, LLC. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface LOCAppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (readonly, strong, nonatomic) NSManagedObjectContext *managedObjectContext;
@property (readonly, strong, nonatomic) NSManagedObjectModel *managedObjectModel;
@property (readonly, strong, nonatomic) NSPersistentStoreCoordinator *persistentStoreCoordinator;

- (void)saveContext;
- (NSURL *)applicationDocumentsDirectory;

@property (nonatomic) UINavigationController *navigationController;

@end
