/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:44:23 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/ShazamKit.framework/ShazamKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class SHSignature;


@protocol SHSessionDriver <SHMatcherDelegate>
@property (assign,nonatomic,__weak) id<SHSessionDriverDelegate> sessionDelegate; 
@property (assign,nonatomic,__weak) id<SHRecognitionSessionDelegate> recognitionDelegate; 
@property (nonatomic,readonly) SHSignature * matchingSignature; 
@required
-(void)setSessionDelegate:(id)arg1;
-(id<SHSessionDriverDelegate>)sessionDelegate;
-(id<SHRecognitionSessionDelegate>)recognitionDelegate;
-(void)flow:(id)arg1 time:(id)arg2;
-(void)setRecognitionDelegate:(id)arg1;
-(SHSignature *)matchingSignature;

@end
