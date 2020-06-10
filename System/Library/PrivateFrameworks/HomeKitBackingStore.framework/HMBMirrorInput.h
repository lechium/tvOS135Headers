/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:43:33 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/HomeKitBackingStore.framework/HomeKitBackingStore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/HMFLogging.h>

@class HMBLocalZone, HMBLocalSQLContextInputBlock, HMFActivity, NSString;

@interface HMBMirrorInput : HMFObject <HMFLogging> {

	HMBLocalZone* _localZone;
	HMBLocalSQLContextInputBlock* _block;
	HMFActivity* _activity;

}

@property (nonatomic,__weak,readonly) HMBLocalZone * localZone;                   //@synthesize localZone=_localZone - In the implementation block
@property (nonatomic,readonly) HMBLocalSQLContextInputBlock * block;              //@synthesize block=_block - In the implementation block
@property (nonatomic,readonly) HMFActivity * activity;                            //@synthesize activity=_activity - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)frmSyncCommitWithMirrorInput:(id)arg1 options:(id)arg2 error:(id*)arg3 ;
+(id)logCategory;
-(BOOL)frmSyncCommitWithOptions:(id)arg1 error:(id*)arg2 ;
-(void)dealloc;
-(HMFActivity *)activity;
-(HMBLocalSQLContextInputBlock *)block;
-(id)abort;
-(id)logIdentifier;
-(HMBLocalZone *)localZone;
-(id)updateModel:(id)arg1 externalID:(id)arg2 externalData:(id)arg3 ;
-(id)removeModelWithModelID:(id)arg1 ;
-(id)commitWithOptions:(id)arg1 error:(id*)arg2 ;
-(id)removeModelWithExternalID:(id)arg1 ;
-(id)initWithLocalZone:(id)arg1 block:(id)arg2 ;
-(id)updateModelData:(id)arg1 modelEncoding:(unsigned long long)arg2 externalID:(id)arg3 externalData:(id)arg4 ;
@end

