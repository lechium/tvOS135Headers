/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:25:09 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PHFetchResult, NSDictionary;

@interface PXMemoriesDataSourceState : NSObject <NSCopying> {

	PHFetchResult* _memories;
	NSDictionary* _infosByMemory;

}

@property (nonatomic,readonly) PHFetchResult * memories;                  //@synthesize memories=_memories - In the implementation block
@property (nonatomic,readonly) NSDictionary * infosByMemory;              //@synthesize infosByMemory=_infosByMemory - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithMemories:(id)arg1 infosByMemory:(id)arg2 ;
-(id)stateUpdatedWithChange:(id)arg1 outMemoriesChangeDetails:(out id*)arg2 ;
-(PHFetchResult *)memories;
-(NSDictionary *)infosByMemory;
@end

