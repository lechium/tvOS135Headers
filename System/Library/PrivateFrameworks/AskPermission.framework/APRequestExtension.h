/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:40:38 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/AskPermission.framework/AskPermission
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSExtensionRequestHandling.h>

@class NSExtensionContext, NSString;

@interface APRequestExtension : NSObject <NSExtensionRequestHandling> {

	NSExtensionContext* _extensionContext;

}

@property (nonatomic,retain) NSExtensionContext * extensionContext;              //@synthesize extensionContext=_extensionContext - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)beginRequestWithExtensionContext:(id)arg1 ;
-(NSExtensionContext *)extensionContext;
-(void)_finish;
-(void)setExtensionContext:(NSExtensionContext *)arg1 ;
-(void)requestUpdatedWithResult:(id)arg1 completion:(/*^block*/id)arg2 ;
@end
