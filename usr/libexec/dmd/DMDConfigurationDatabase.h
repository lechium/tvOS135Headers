//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreData/NSPersistentContainer.h>

@interface DMDConfigurationDatabase : NSPersistentContainer
{
}

+ (id)_newDatabaseWithURL:(id)arg1;	// IMP=0x000000010002a094
+ (id)newUserDatabase;	// IMP=0x000000010002a034
+ (id)descriptionForSQLiteStoreWithDatabaseURL:(id)arg1;	// IMP=0x0000000100029fc4
+ (id)managedObjectModel;	// IMP=0x0000000100029cc8
- (void)performBackgroundTask:(CDUnknownBlockType)arg1;	// IMP=0x000000010002a210
- (id)init;	// IMP=0x000000010002a188
- (id)description;	// IMP=0x0000000100029dc8

@end

