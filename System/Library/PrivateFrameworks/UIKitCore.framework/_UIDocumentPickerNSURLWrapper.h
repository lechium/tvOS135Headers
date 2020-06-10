/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:45:19 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSURL, NSData;

@interface _UIDocumentPickerNSURLWrapper : NSObject <NSSecureCoding> {

	NSURL* _url;
	NSURL* _promiseURL;
	NSData* _scope;
	NSData* _promiseScope;

}

@property (nonatomic,copy) NSURL * url;                //@synthesize url=_url - In the implementation block
@property (retain) NSURL * promiseURL;                 //@synthesize promiseURL=_promiseURL - In the implementation block
@property (retain) NSData * scope;                     //@synthesize scope=_scope - In the implementation block
@property (retain) NSData * promiseScope;              //@synthesize promiseScope=_promiseScope - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)wrapperWithURL:(id)arg1 createSandboxIfNoneAttached:(BOOL)arg2 ;
+(id)wrapperForExportWithURL:(id)arg1 error:(id*)arg2 ;
+(void)assembleURL:(id)arg1 sandbox:(id)arg2 physicalURL:(id)arg3 physicalSandbox:(id)arg4 ;
+(id)wrapperWithURL:(id)arg1 ;
+(id)wrapperWithURL:(id)arg1 readonly:(BOOL)arg2 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSURL *)url;
-(void)setPromiseURL:(NSURL *)arg1 ;
-(NSURL *)promiseURL;
-(NSData *)scope;
-(void)setScope:(NSData *)arg1 ;
-(void)setUrl:(NSURL *)arg1 ;
-(void)setPromiseScope:(NSData *)arg1 ;
-(NSData *)promiseScope;
@end

