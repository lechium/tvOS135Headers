/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:42:24 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/Frameworks/TVMLKit.framework/TVMLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/IKPlayerEventMarshaling.h>

@protocol TVPlaybackEventMarshaling;
@class NSDictionary, NSString;

@interface _TVPlaybackEventUserInfoBridge : NSObject <IKPlayerEventMarshaling> {

	id<TVPlaybackEventMarshaling> _tvUserInfo;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSDictionary * properties; 
-(BOOL)respondsToSelector:(SEL)arg1 ;
-(NSDictionary *)properties;
-(void)processReturnJSValue:(id)arg1 inContext:(id)arg2 ;
-(id)initWithTVPlaybackEventUserInfo:(id)arg1 ;
@end

