/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:12:25 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface NSEncodingDetectionPlaceholder : NSObject {

	unsigned long long nsEncoding;
	unsigned cfEncoding;
	NSString* string;
	char* bytes;
	unsigned long long bytesLength;
	char* bytesStart;

}

@property (readonly) unsigned long long nsEncoding; 
@property (readonly) unsigned cfEncoding; 
@property (readonly) NSString * string; 
@property (readonly) char* bytes; 
@property (readonly) unsigned long long bytesLength; 
+(id)placeholderForDetector:(id)arg1 ;
-(id)debugDescription;
-(void)dealloc;
-(char*)bytes;
-(NSString *)string;
-(unsigned long long)nsEncoding;
-(unsigned)cfEncoding;
-(unsigned long long)bytesLength;
@end

