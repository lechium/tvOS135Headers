/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:15:19 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/TextureIO.framework/TextureIO
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/TXRBufferMap.h>

@class TXRDefaultBuffer, NSString;

@interface TXRDefaultBufferMap : NSObject <TXRBufferMap> {

	void* _bytes;
	TXRDefaultBuffer* _buffer;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) void* bytes; 
-(void*)bytes;
-(id)initForBuffer:(id)arg1 withBytes:(void*)arg2 ;
@end

