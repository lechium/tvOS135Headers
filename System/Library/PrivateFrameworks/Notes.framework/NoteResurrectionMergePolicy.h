/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:24:15 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/Notes.framework/Notes
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreData/NSMergePolicy.h>

@interface NoteResurrectionMergePolicy : NSMergePolicy
+(id)sharedNoteResurrectionMergePolicy;
-(BOOL)resolveConflicts:(id)arg1 error:(id*)arg2 ;
-(id)snapshotFromRecord:(id)arg1 ;
-(id)localStoreForNote:(id)arg1 ;
-(BOOL)accountExists:(id)arg1 ;
@end

