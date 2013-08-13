//
//  Location.h
//  BNCoreDataTest
//
//  Created by Nikolay Ilin on 13.08.13.
//  Copyright (c) 2013 BossNote. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>

@class ActionSource, Alarm;

@interface Location : NSManagedObject

@property (nonatomic, retain) NSString * address;
@property (nonatomic, retain) NSString * city;
@property (nonatomic, retain) NSString * country;
@property (nonatomic, retain) NSNumber * lat;
@property (nonatomic, retain) NSNumber * lng;
@property (nonatomic, retain) NSString * title;
@property (nonatomic, retain) NSString * type;
@property (nonatomic, retain) id viewport;
@property (nonatomic, retain) NSSet *actions;
@property (nonatomic, retain) NSSet *allarms;
@end

@interface Location (CoreDataGeneratedAccessors)

- (void)addActionsObject:(ActionSource *)value;
- (void)removeActionsObject:(ActionSource *)value;
- (void)addActions:(NSSet *)values;
- (void)removeActions:(NSSet *)values;

- (void)addAllarmsObject:(Alarm *)value;
- (void)removeAllarmsObject:(Alarm *)value;
- (void)addAllarms:(NSSet *)values;
- (void)removeAllarms:(NSSet *)values;

@end
