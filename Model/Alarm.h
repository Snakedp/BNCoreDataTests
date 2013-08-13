//
//  Alarm.h
//  BNCoreDataTest
//
//  Created by Nikolay Ilin on 13.08.13.
//  Copyright (c) 2013 BossNote. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>

@class Location, Note;

@interface Alarm : NSManagedObject

@property (nonatomic, retain) NSDate * fireDate;
@property (nonatomic, retain) NSNumber * isActive;
@property (nonatomic, retain) Location *location;
@property (nonatomic, retain) Note *note;

@end
