/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:23:22 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/Frameworks/WebKit.framework/WebKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WebKit/WebKit-Structs.h>
#import <libobjc.A.dylib/WKObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSURL;

@interface _WKUserStyleSheet : NSObject <WKObject, NSCopying> {

	ObjectStorage<API::UserStyleSheet> _userStyleSheet;

}

@property (nonatomic,copy,readonly) NSString * source; 
@property (nonatomic,copy,readonly) NSURL * baseURL; 
@property (getter=isForMainFrameOnly,nonatomic,readonly) BOOL forMainFrameOnly; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) Object* _apiObject; 
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
-(NSURL *)baseURL;
-(NSString *)source;
-(Object*)_apiObject;
-(BOOL)isForMainFrameOnly;
-(id)initWithSource:(id)arg1 forMainFrameOnly:(BOOL)arg2 ;
-(id)initWithSource:(id)arg1 forMainFrameOnly:(BOOL)arg2 legacyWhitelist:(id)arg3 legacyBlacklist:(id)arg4 userContentWorld:(id)arg5 ;
-(id)initWithSource:(id)arg1 forMainFrameOnly:(BOOL)arg2 legacyWhitelist:(id)arg3 legacyBlacklist:(id)arg4 baseURL:(id)arg5 userContentWorld:(id)arg6 ;
@end

