/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:23:20 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/Frameworks/WebKit.framework/WebKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WebKit/WebKit-Structs.h>
#import <libobjc.A.dylib/WKObject.h>

@class NSURL, NSString;

@interface WKContextMenuElementInfo : NSObject <WKObject> {

	ObjectStorage<API::ContextMenuElementInfo> _elementInfo;

}

@property (nonatomic,readonly) NSURL * linkURL; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) Object* _apiObject; 
-(Object*)_apiObject;
-(id)_activatedElementInfo;
-(NSURL *)linkURL;
@end

