/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:23:59 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol IKJSDOMImplementationLS <JSExport>
@property (getter=synchronousMode,readonly) long long MODE_SYNCHRONOUS; 
@property (getter=asynchronousMode,readonly) long long MODE_ASYNCHRONOUS; 
@required
-(long long)synchronousMode;
-(id)createLSParser:(long long)arg1 :(id)arg2;
-(id)createLSSerializer;
-(id)createLSInput;
-(long long)asynchronousMode;

@end

