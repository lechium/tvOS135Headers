/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:15:08 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GEOXPCRequest.h>
#import <libobjc.A.dylib/GEOXPCRequest.h>

@class NSString;

@interface GEOImageServicePurgeCacheToSizeRequest : GEOXPCRequest <GEOXPCRequest> {

	unsigned long long _targetSize;

}

@property (assign,nonatomic) unsigned long long targetSize;              //@synthesize targetSize=_targetSize - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
+(Class)replyClass;
-(BOOL)isValid;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)expectsReply;
-(unsigned long long)targetSize;
-(void)setTargetSize:(unsigned long long)arg1 ;
@end

