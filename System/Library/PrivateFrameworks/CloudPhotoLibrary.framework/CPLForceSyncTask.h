/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:17:07 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray, NSString;

@interface CPLForceSyncTask : NSObject {

	BOOL _cancelled;
	NSArray* _scopeIdentifiers;
	NSString* _taskIdentifier;

}

@property (nonatomic,copy) NSString * taskIdentifier;                          //@synthesize taskIdentifier=_taskIdentifier - In the implementation block
@property (nonatomic,copy,readonly) NSArray * scopeIdentifiers;                //@synthesize scopeIdentifiers=_scopeIdentifiers - In the implementation block
@property (getter=isCancelled,nonatomic,readonly) BOOL cancelled;              //@synthesize cancelled=_cancelled - In the implementation block
-(id)description;
-(NSString *)taskIdentifier;
-(void)setTaskIdentifier:(NSString *)arg1 ;
-(BOOL)isCancelled;
-(void)launch;
-(NSArray *)scopeIdentifiers;
-(id)initWithScopeIdentifiers:(id)arg1 ;
-(void)cancelTask;
@end

