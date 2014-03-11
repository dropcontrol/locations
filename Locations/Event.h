//
//  Event.h
//  Locations
//
//  Created by hiroshi yamato on 3/11/14.
//  Copyright (c) 2014 Alliance Port, LLC. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>


@interface Event : NSManagedObject

@property (nonatomic, retain) NSDate * creationDate;
@property (nonatomic, retain) NSNumber * latitude;
@property (nonatomic, retain) NSNumber * longitude;

@end
