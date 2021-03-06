/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:42:44 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SHRecognitionSessionDelegate <NSObject>
@optional
-(void)session:(id)arg1 willMatch:(id)arg2;
-(void)session:(id)arg1 didNotFindMatchForSignature:(id)arg2;
-(void)session:(id)arg1 didNotFindMatchforSignature:(id)arg2 needsMinimumSignatureLength:(double)arg3;

@required
-(void)session:(id)arg1 didFindMatch:(id)arg2;
-(void)session:(id)arg1 didFailForSignature:(id)arg2 withError:(id)arg3;

@end

