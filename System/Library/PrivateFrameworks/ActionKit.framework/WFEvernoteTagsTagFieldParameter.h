/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:42:44 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WorkflowKit/WFDynamicTagFieldParameter.h>
#import <libobjc.A.dylib/WFDynamicTagFieldDataSource.h>

@class WFEvernoteAccessResource, NSString;

@interface WFEvernoteTagsTagFieldParameter : WFDynamicTagFieldParameter <WFDynamicTagFieldDataSource> {

	WFEvernoteAccessResource* _evernoteAccessResource;

}

@property (nonatomic,retain) WFEvernoteAccessResource * evernoteAccessResource;              //@synthesize evernoteAccessResource=_evernoteAccessResource - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)referencedActionResourceClasses;
-(void)wasAddedToWorkflow;
-(id)suggestedTagsForTagField:(id)arg1 ;
-(void)setActionResources:(id)arg1 ;
-(void)setEvernoteAccessResource:(WFEvernoteAccessResource *)arg1 ;
-(void)updateTags;
-(WFEvernoteAccessResource *)evernoteAccessResource;
@end

