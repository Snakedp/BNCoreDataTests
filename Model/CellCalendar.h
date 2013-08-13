//
//  CellCalendar.h
//  BNCoreDataTest
//
//  Created by Nikolay Ilin on 13.08.13.
//  Copyright (c) 2013 BossNote. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>

@class Note;

@interface CellCalendar : NSManagedObject

@property (nonatomic, retain) NSDate * dayKey;
@property (nonatomic, retain) NSDate * end;
@property (nonatomic, retain) NSNumber * noteAttach;
@property (nonatomic, retain) NSData * noteAttachData;
@property (nonatomic, retain) NSString * noteMessage;
@property (nonatomic, retain) NSDate * start;
@property (nonatomic, retain) NSNumber * type;
@property (nonatomic, retain) Note *note;

@end
