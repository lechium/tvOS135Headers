/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:42:43 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ActionKit/FATObject.h>

@class NSNumber;

@interface EDAMClientSyncRateConfig : FATObject {

	NSNumber* _syncStateIntervalMillis;
	NSNumber* _updateNoteWhenIdleForMillis;
	NSNumber* _updateNoteDuringEditIntervalMillis;

}

@property (nonatomic,retain) NSNumber * syncStateIntervalMillis;                         //@synthesize syncStateIntervalMillis=_syncStateIntervalMillis - In the implementation block
@property (nonatomic,retain) NSNumber * updateNoteWhenIdleForMillis;                     //@synthesize updateNoteWhenIdleForMillis=_updateNoteWhenIdleForMillis - In the implementation block
@property (nonatomic,retain) NSNumber * updateNoteDuringEditIntervalMillis;              //@synthesize updateNoteDuringEditIntervalMillis=_updateNoteDuringEditIntervalMillis - In the implementation block
+(id)structName;
+(id)structFields;
-(NSNumber *)syncStateIntervalMillis;
-(void)setSyncStateIntervalMillis:(NSNumber *)arg1 ;
-(NSNumber *)updateNoteWhenIdleForMillis;
-(void)setUpdateNoteWhenIdleForMillis:(NSNumber *)arg1 ;
-(NSNumber *)updateNoteDuringEditIntervalMillis;
-(void)setUpdateNoteDuringEditIntervalMillis:(NSNumber *)arg1 ;
@end

