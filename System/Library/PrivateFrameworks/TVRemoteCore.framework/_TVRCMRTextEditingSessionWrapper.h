/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:41:44 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/TVRemoteCore.framework/TVRemoteCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, _TVRCMRTextEditingAttributesWrapper;

@interface _TVRCMRTextEditingSessionWrapper : NSObject {

	void* _session;

}

@property (nonatomic,copy,readonly) NSString * text; 
@property (nonatomic,readonly) _TVRCMRTextEditingAttributesWrapper * attributes; 
-(void)dealloc;
-(id)initWithSession:(void*)arg1 ;
-(_TVRCMRTextEditingAttributesWrapper *)attributes;
-(NSString *)text;
@end

