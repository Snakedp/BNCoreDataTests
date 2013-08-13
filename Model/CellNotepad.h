//
//  CellNotepad.h
//  BNCoreDataTest
//
//  Created by Nikolay Ilin on 13.08.13.
//  Copyright (c) 2013 BossNote. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>

@class Note;

@interface CellNotepad : NSManagedObject

@property (nonatomic, retain) NSDate * dateCreate;
@property (nonatomic, retain) NSDate * dateEvent;
@property (nonatomic, retain) NSDate * dateModify;
@property (nonatomic, retain) NSNumber * eventLen;
@property (nonatomic, retain) NSDate * monthKey;
@property (nonatomic, retain) NSNumber * noteAttach;
@property (nonatomic, retain) NSData * noteAttachData;
@property (nonatomic, retain) NSString * noteMessage;
@property (nonatomic, retain) NSNumber * type;
@property (nonatomic, retain) Note *note;

@end
