//
//  ActionSource.h
//  BNCoreDataTest
//
//  Created by Nikolay Ilin on 13.08.13.
//  Copyright (c) 2013 BossNote. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>

@class Location, Note;

@interface ActionSource : NSManagedObject

@property (nonatomic, retain) NSDate * date;
@property (nonatomic, retain) NSString * devID;
@property (nonatomic, retain) NSString * title;
@property (nonatomic, retain) Location *location;
@property (nonatomic, retain) NSSet *notesCreate;
@property (nonatomic, retain) NSSet *notesModify;
@end

@interface ActionSource (CoreDataGeneratedAccessors)

- (void)addNotesCreateObject:(Note *)value;
- (void)removeNotesCreateObject:(Note *)value;
- (void)addNotesCreate:(NSSet *)values;
- (void)removeNotesCreate:(NSSet *)values;

- (void)addNotesModifyObject:(Note *)value;
- (void)removeNotesModifyObject:(Note *)value;
- (void)addNotesModify:(NSSet *)values;
- (void)removeNotesModify:(NSSet *)values;

@end
