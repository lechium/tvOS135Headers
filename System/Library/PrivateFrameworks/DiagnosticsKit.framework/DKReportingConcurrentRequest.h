/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:40:58 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/DiagnosticsKit.framework/DiagnosticsKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class DKExtensionAdapter, NSMutableSet;

@interface DKReportingConcurrentRequest : NSObject {

	DKExtensionAdapter* _generator;
	NSMutableSet* _manifest;

}

@property (nonatomic,retain) DKExtensionAdapter * generator;              //@synthesize generator=_generator - In the implementation block
@property (nonatomic,retain) NSMutableSet * manifest;                     //@synthesize manifest=_manifest - In the implementation block
+(id)concurrentRequestWithGenerator:(id)arg1 ;
-(DKExtensionAdapter *)generator;
-(NSMutableSet *)manifest;
-(void)setManifest:(NSMutableSet *)arg1 ;
-(void)setGenerator:(DKExtensionAdapter *)arg1 ;
-(id)initWithGenerator:(id)arg1 ;
@end

