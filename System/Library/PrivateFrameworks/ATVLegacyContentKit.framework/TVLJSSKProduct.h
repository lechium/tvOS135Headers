/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:42:34 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/ATVLegacyContentKit.framework/ATVLegacyContentKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ATVLegacyContentKit/ATVLegacyContentKit-Structs.h>
#import <libobjc.A.dylib/TVLJSObject.h>

@class SKProduct;

@interface TVLJSSKProduct : NSObject <TVLJSObject> {

	OpaqueJSValueRef _jsObjectRef;
	SKProduct* _product;

}

@property (nonatomic,readonly) SKProduct * product;              //@synthesize product=_product - In the implementation block
+(void)addClassDefinitionInContext:(OpaqueJSContextRef)arg1 ;
+(id)productFromJSValue:(OpaqueJSValueRef)arg1 context:(OpaqueJSContextRef)arg2 ;
-(id)init;
-(void)dealloc;
-(SKProduct *)product;
-(OpaqueJSValueRef)jsObjectRef;
-(void)_jsFinalize;
-(id)initWithProduct:(id)arg1 context:(OpaqueJSContextRef)arg2 ;
@end
