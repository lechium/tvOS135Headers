/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:27:36 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/AssistantUI.framework/AssistantUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class SASRequestOptions;

@interface AFUITestInput : NSObject {

	SASRequestOptions* _requestOptions;

}

@property (nonatomic,readonly) SASRequestOptions * requestOptions;              //@synthesize requestOptions=_requestOptions - In the implementation block
+(id)_baseRequestOptions;
-(SASRequestOptions *)requestOptions;
-(id)initWithText:(id)arg1 ;
-(id)_initWithRequestOptions:(id)arg1 ;
-(id)initWithRecordedSpeechURL:(id)arg1 ;
@end

