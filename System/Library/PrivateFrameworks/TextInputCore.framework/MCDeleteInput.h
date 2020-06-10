/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:25:54 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/TextInputCore.framework/TextInputCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TextInputCore/TextInputCore-Structs.h>
#import <TextInputCore/MCKeyboardInput.h>

@class NSString;

@interface MCDeleteInput : MCKeyboardInput {

	BOOL _deleteBySyllable;
	BOOL _shouldDeleteAcceptCandidateInput;
	NSString* _deletedText;

}

@property (nonatomic,readonly) NSString * deletedText;                             //@synthesize deletedText=_deletedText - In the implementation block
@property (nonatomic,readonly) BOOL deleteBySyllable;                              //@synthesize deleteBySyllable=_deleteBySyllable - In the implementation block
@property (nonatomic,readonly) BOOL shouldDeleteAcceptCandidateInput;              //@synthesize shouldDeleteAcceptCandidateInput=_shouldDeleteAcceptCandidateInput - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)init;
-(BOOL)canComposeNew:(id)arg1 ;
-(id)initWithDeletedText:(id)arg1 deleteBySyllable:(BOOL)arg2 shouldDeleteAcceptCandidateInput:(BOOL)arg3 ;
-(NSString *)deletedText;
-(BOOL)deleteBySyllable;
-(BOOL)shouldDeleteAcceptCandidateInput;
@end
