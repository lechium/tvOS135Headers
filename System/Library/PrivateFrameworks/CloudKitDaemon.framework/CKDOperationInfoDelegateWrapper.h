/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:40:46 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CKDOperationInfoDelegate;
@class NSString;

@interface CKDOperationInfoDelegateWrapper : NSObject {

	id<CKDOperationInfoDelegate> _delegate;
	NSString* _personaID;

}

@property (assign,nonatomic,__weak) id<CKDOperationInfoDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy) NSString * personaID;                                        //@synthesize personaID=_personaID - In the implementation block
-(id<CKDOperationInfoDelegate>)delegate;
-(void)setDelegate:(id<CKDOperationInfoDelegate>)arg1 ;
-(id)initWithDelegate:(id)arg1 ;
-(NSString *)personaID;
-(void)setPersonaID:(NSString *)arg1 ;
-(void)performWithDelegate:(/*^block*/id)arg1 ;
@end

