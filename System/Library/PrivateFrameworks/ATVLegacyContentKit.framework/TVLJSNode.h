/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:42:36 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/ATVLegacyContentKit.framework/ATVLegacyContentKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ATVLegacyContentKit/ATVLegacyContentKit-Structs.h>
#import <libobjc.A.dylib/TVLJSObject.h>

@class TVLXMLNode;

@interface TVLJSNode : NSObject <TVLJSObject> {

	OpaqueJSValueRef jsObjectRef;
	TVLXMLNode* xmlNode;

}

@property (assign,nonatomic) OpaqueJSValueRef jsObjectRef; 
@property (nonatomic,retain) TVLXMLNode * xmlNode; 
+(void)addConstructorToObject:(OpaqueJSValueRef)arg1 inContext:(OpaqueJSContextRef)arg2 ;
+(id)nodeInContext:(OpaqueJSContextRef)arg1 withNode:(id)arg2 ;
+(id)nodeFromValue:(OpaqueJSValueRef)arg1 inContext:(OpaqueJSContextRef)arg2 exception:(const OpaqueJSValue*)arg3 ;
+(OpaqueJSValueRef)constructObjectWithClassName:(id)arg1 withTVLJSNodeClass:(Class)arg2 inContext:(OpaqueJSContextRef)arg3 ;
-(void)dealloc;
-(OpaqueJSValueRef)jsObjectRef;
-(void)setXmlNode:(TVLXMLNode *)arg1 ;
-(TVLXMLNode *)xmlNode;
-(void)setJsObjectRef:(OpaqueJSValueRef)arg1 ;
@end
