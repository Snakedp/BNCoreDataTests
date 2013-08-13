//
//  Note.h
//  BNCoreDataTest
//
//  Created by Nikolay Ilin on 13.08.13.
//  Copyright (c) 2013 BossNote. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>

@class ActionSource, Alarm, Attachment, CellCalendar, CellDiary, CellNotepad, Contact, NoteGroup, NoteTag;

@interface Note : NSManagedObject

@property (nonatomic, retain) NSNumber * commandTS;
@property (nonatomic, retain) id event;
@property (nonatomic, retain) NSString * groupID;
@property (nonatomic, retain) NSNumber * isDone;
@property (nonatomic, retain) NSString * noteID;
@property (nonatomic, retain) NSString * noteMessage;
@property (nonatomic, retain) NSString * notePass;
@property (nonatomic, retain) NSString * ownerID;
@property (nonatomic, retain) id smartNote;
@property (nonatomic, retain) NSNumber * status;
@property (nonatomic, retain) NSNumber * type;
@property (nonatomic, retain) Alarm *alarms;
@property (nonatomic, retain) NSOrderedSet *attachments;
@property (nonatomic, retain) NSOrderedSet *cellsCalendar;
@property (nonatomic, retain) NSOrderedSet *cellsDiary;
@property (nonatomic, retain) NSOrderedSet *cellsNotepad;
@property (nonatomic, retain) NSOrderedSet *contacts;
@property (nonatomic, retain) ActionSource *create;
@property (nonatomic, retain) NSOrderedSet *groups;
@property (nonatomic, retain) ActionSource *modify;
@property (nonatomic, retain) NSOrderedSet *tags;
@end

@interface Note (CoreDataGeneratedAccessors)

- (void)insertObject:(Attachment *)value inAttachmentsAtIndex:(NSUInteger)idx;
- (void)removeObjectFromAttachmentsAtIndex:(NSUInteger)idx;
- (void)insertAttachments:(NSArray *)value atIndexes:(NSIndexSet *)indexes;
- (void)removeAttachmentsAtIndexes:(NSIndexSet *)indexes;
- (void)replaceObjectInAttachmentsAtIndex:(NSUInteger)idx withObject:(Attachment *)value;
- (void)replaceAttachmentsAtIndexes:(NSIndexSet *)indexes withAttachments:(NSArray *)values;
- (void)addAttachmentsObject:(Attachment *)value;
- (void)removeAttachmentsObject:(Attachment *)value;
- (void)addAttachments:(NSOrderedSet *)values;
- (void)removeAttachments:(NSOrderedSet *)values;
- (void)insertObject:(CellCalendar *)value inCellsCalendarAtIndex:(NSUInteger)idx;
- (void)removeObjectFromCellsCalendarAtIndex:(NSUInteger)idx;
- (void)insertCellsCalendar:(NSArray *)value atIndexes:(NSIndexSet *)indexes;
- (void)removeCellsCalendarAtIndexes:(NSIndexSet *)indexes;
- (void)replaceObjectInCellsCalendarAtIndex:(NSUInteger)idx withObject:(CellCalendar *)value;
- (void)replaceCellsCalendarAtIndexes:(NSIndexSet *)indexes withCellsCalendar:(NSArray *)values;
- (void)addCellsCalendarObject:(CellCalendar *)value;
- (void)removeCellsCalendarObject:(CellCalendar *)value;
- (void)addCellsCalendar:(NSOrderedSet *)values;
- (void)removeCellsCalendar:(NSOrderedSet *)values;
- (void)insertObject:(CellDiary *)value inCellsDiaryAtIndex:(NSUInteger)idx;
- (void)removeObjectFromCellsDiaryAtIndex:(NSUInteger)idx;
- (void)insertCellsDiary:(NSArray *)value atIndexes:(NSIndexSet *)indexes;
- (void)removeCellsDiaryAtIndexes:(NSIndexSet *)indexes;
- (void)replaceObjectInCellsDiaryAtIndex:(NSUInteger)idx withObject:(CellDiary *)value;
- (void)replaceCellsDiaryAtIndexes:(NSIndexSet *)indexes withCellsDiary:(NSArray *)values;
- (void)addCellsDiaryObject:(CellDiary *)value;
- (void)removeCellsDiaryObject:(CellDiary *)value;
- (void)addCellsDiary:(NSOrderedSet *)values;
- (void)removeCellsDiary:(NSOrderedSet *)values;
- (void)insertObject:(CellNotepad *)value inCellsNotepadAtIndex:(NSUInteger)idx;
- (void)removeObjectFromCellsNotepadAtIndex:(NSUInteger)idx;
- (void)insertCellsNotepad:(NSArray *)value atIndexes:(NSIndexSet *)indexes;
- (void)removeCellsNotepadAtIndexes:(NSIndexSet *)indexes;
- (void)replaceObjectInCellsNotepadAtIndex:(NSUInteger)idx withObject:(CellNotepad *)value;
- (void)replaceCellsNotepadAtIndexes:(NSIndexSet *)indexes withCellsNotepad:(NSArray *)values;
- (void)addCellsNotepadObject:(CellNotepad *)value;
- (void)removeCellsNotepadObject:(CellNotepad *)value;
- (void)addCellsNotepad:(NSOrderedSet *)values;
- (void)removeCellsNotepad:(NSOrderedSet *)values;
- (void)insertObject:(Contact *)value inContactsAtIndex:(NSUInteger)idx;
- (void)removeObjectFromContactsAtIndex:(NSUInteger)idx;
- (void)insertContacts:(NSArray *)value atIndexes:(NSIndexSet *)indexes;
- (void)removeContactsAtIndexes:(NSIndexSet *)indexes;
- (void)replaceObjectInContactsAtIndex:(NSUInteger)idx withObject:(Contact *)value;
- (void)replaceContactsAtIndexes:(NSIndexSet *)indexes withContacts:(NSArray *)values;
- (void)addContactsObject:(Contact *)value;
- (void)removeContactsObject:(Contact *)value;
- (void)addContacts:(NSOrderedSet *)values;
- (void)removeContacts:(NSOrderedSet *)values;
- (void)insertObject:(NoteGroup *)value inGroupsAtIndex:(NSUInteger)idx;
- (void)removeObjectFromGroupsAtIndex:(NSUInteger)idx;
- (void)insertGroups:(NSArray *)value atIndexes:(NSIndexSet *)indexes;
- (void)removeGroupsAtIndexes:(NSIndexSet *)indexes;
- (void)replaceObjectInGroupsAtIndex:(NSUInteger)idx withObject:(NoteGroup *)value;
- (void)replaceGroupsAtIndexes:(NSIndexSet *)indexes withGroups:(NSArray *)values;
- (void)addGroupsObject:(NoteGroup *)value;
- (void)removeGroupsObject:(NoteGroup *)value;
- (void)addGroups:(NSOrderedSet *)values;
- (void)removeGroups:(NSOrderedSet *)values;
- (void)insertObject:(NoteTag *)value inTagsAtIndex:(NSUInteger)idx;
- (void)removeObjectFromTagsAtIndex:(NSUInteger)idx;
- (void)insertTags:(NSArray *)value atIndexes:(NSIndexSet *)indexes;
- (void)removeTagsAtIndexes:(NSIndexSet *)indexes;
- (void)replaceObjectInTagsAtIndex:(NSUInteger)idx withObject:(NoteTag *)value;
- (void)replaceTagsAtIndexes:(NSIndexSet *)indexes withTags:(NSArray *)values;
- (void)addTagsObject:(NoteTag *)value;
- (void)removeTagsObject:(NoteTag *)value;
- (void)addTags:(NSOrderedSet *)values;
- (void)removeTags:(NSOrderedSet *)values;
@end
