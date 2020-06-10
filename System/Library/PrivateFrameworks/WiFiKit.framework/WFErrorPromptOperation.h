/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:28:19 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/WiFiKit.framework/WiFiKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WiFiKit/WFUserPromptOperation.h>
#import <libobjc.A.dylib/WFNetworkView.h>

@protocol WFErrorProviderContext;
@interface WFErrorPromptOperation : WFUserPromptOperation <WFNetworkView> {

	id<WFErrorProviderContext> _context;

}

@property (nonatomic,retain) id<WFErrorProviderContext> context;              //@synthesize context=_context - In the implementation block
@property (nonatomic,readonly) BOOL wantsModalPresentation; 
+(id)errorPromptOperationWithContext:(id)arg1 ;
-(id<WFErrorProviderContext>)context;
-(void)setContext:(id<WFErrorProviderContext>)arg1 ;
@end

