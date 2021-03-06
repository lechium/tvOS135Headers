/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:23:19 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/Frameworks/WebKit.framework/WebKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WebKit/WebKit-Structs.h>
#import <Foundation/NSNumber.h>
#import <libobjc.A.dylib/WKObject.h>

@class NSString;

@interface WKNSNumber : NSNumber <WKObject> {

	int _type;
	SCD_Union_WK38 _number;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) Object* _apiObject; 
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
-(double)doubleValue;
-(long long)longLongValue;
-(unsigned long long)unsignedLongLongValue;
-(const char*)objCType;
-(char)charValue;
-(void)getValue:(void*)arg1 ;
-(Object*)_apiObject;
@end

