//
//  Contact.h
//  BNCoreDataTest
//
//  Created by Nikolay Ilin on 13.08.13.
//  Copyright (c) 2013 BossNote. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>

@class Note;

@interface Contact : NSManagedObject

@property (nonatomic, retain) NSString * fname;
@property (nonatomic, retain) NSString * id;
@property (nonatomic, retain) Note *notes;

@end
