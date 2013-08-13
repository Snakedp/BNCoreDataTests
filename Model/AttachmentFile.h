//
//  AttachmentFile.h
//  BNCoreDataTest
//
//  Created by Nikolay Ilin on 13.08.13.
//  Copyright (c) 2013 BossNote. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>

@class Attachment;

@interface AttachmentFile : NSManagedObject

@property (nonatomic, retain) NSData * data;
@property (nonatomic, retain) NSNumber * downloadProgress;
@property (nonatomic, retain) NSString * name;
@property (nonatomic, retain) NSNumber * size;
@property (nonatomic, retain) NSNumber * status;
@property (nonatomic, retain) NSNumber * uploadProgress;
@property (nonatomic, retain) NSString * url;
@property (nonatomic, retain) Attachment *attachment;

@end
