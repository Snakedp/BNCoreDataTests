//
//  Attachment.h
//  BNCoreDataTest
//
//  Created by Nikolay Ilin on 13.08.13.
//  Copyright (c) 2013 BossNote. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>

@class AttachmentFile, Note;

@interface Attachment : NSManagedObject

@property (nonatomic, retain) NSString * attachmentID;
@property (nonatomic, retain) NSNumber * availabilityView;
@property (nonatomic, retain) NSNumber * commandTS;
@property (nonatomic, retain) NSString * contentType;
@property (nonatomic, retain) NSString * desc;
@property (nonatomic, retain) NSString * fileName;
@property (nonatomic, retain) NSNumber * fileUpdate;
@property (nonatomic, retain) NSString * noteID;
@property (nonatomic, retain) NSString * ownerID;
@property (nonatomic, retain) NSString * title;
@property (nonatomic, retain) AttachmentFile *file_1;
@property (nonatomic, retain) AttachmentFile *file_2;
@property (nonatomic, retain) AttachmentFile *file_4;
@property (nonatomic, retain) AttachmentFile *file_8;
@property (nonatomic, retain) Note *note;

@end
