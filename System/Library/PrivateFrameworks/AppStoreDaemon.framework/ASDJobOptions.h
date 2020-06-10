/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:25:50 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/AppStoreDaemon.framework/AppStoreDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSXPCConnection, ASDJobManifest;

@interface ASDJobOptions : NSObject <NSSecureCoding> {

	NSXPCConnection* _endpoint;
	ASDJobManifest* _manifest;

}

@property (nonatomic,retain) NSXPCConnection * endpoint;              //@synthesize endpoint=_endpoint - In the implementation block
@property (nonatomic,retain) ASDJobManifest * manifest;               //@synthesize manifest=_manifest - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSXPCConnection *)endpoint;
-(void)setEndpoint:(NSXPCConnection *)arg1 ;
-(ASDJobManifest *)manifest;
-(void)setManifest:(ASDJobManifest *)arg1 ;
@end

