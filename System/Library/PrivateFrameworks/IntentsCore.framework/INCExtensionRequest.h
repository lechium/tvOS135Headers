/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:26:58 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/IntentsCore.framework/IntentsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSUUID, INWatchdogTimer, NSObject, NSOperationQueue, NSExtension, NSError, NSString, NSArray;

@interface INCExtensionRequest : NSObject {

	NSUUID* _requestIdentifier;
	INWatchdogTimer* _contextTimer;
	NSObject*<OS_dispatch_queue> _queue;
	NSOperationQueue* _requestOperationQueue;
	BOOL _requiresTCC;
	NSExtension* _extension;
	NSError* _error;
	NSString* _identifier;
	NSArray* _extensionInputItems;

}

@property (setter=_setExtension:,nonatomic,retain) NSExtension * _extension;              //@synthesize extension=_extension - In the implementation block
@property (setter=_setError:,nonatomic,retain) NSError * _error;                          //@synthesize error=_error - In the implementation block
@property (nonatomic,retain) NSString * identifier;                                       //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,retain) NSArray * extensionInputItems;                               //@synthesize extensionInputItems=_extensionInputItems - In the implementation block
@property (assign,nonatomic) BOOL requiresTCC;                                            //@synthesize requiresTCC=_requiresTCC - In the implementation block
+(void)initialize;
-(NSString *)identifier;
-(NSError *)_error;
-(void)setIdentifier:(NSString *)arg1 ;
-(void)_setError:(id)arg1 ;
-(id)initWithIdentifier:(id)arg1 ;
-(void)reset;
-(NSExtension *)_extension;
-(id)_requestOperationQueue;
-(void)setExtensionInputItems:(NSArray *)arg1 ;
-(void)startRequestForIntent:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)_extensionContextHost;
-(void)_resetExtensionContextHostWithCompletion:(/*^block*/id)arg1 ;
-(void)_resetContextTimer;
-(void)_scheduleContextTimer;
-(void)_setExtension:(id)arg1 ;
-(NSArray *)extensionInputItems;
-(BOOL)requiresTCC;
-(void)setRequiresTCC:(BOOL)arg1 ;
@end

