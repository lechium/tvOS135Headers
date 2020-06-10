/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:40:47 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CKDOperationInfoDelegate <NSObject>
@property (getter=isInvalidated,nonatomic,readonly) BOOL invalidated; 
@required
-(BOOL)isInvalidated;
-(void)wasUnexpectedlyUnregisteredForOperationID:(id)arg1;
-(void)operationWithID:(id)arg1 didProgress:(id)arg2;
-(void)operationWithID:(id)arg1 didComplete:(id)arg2;

@end

