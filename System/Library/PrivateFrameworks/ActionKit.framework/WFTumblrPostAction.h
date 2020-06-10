/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:42:47 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WorkflowKit/WFAction.h>
#import <libobjc.A.dylib/WFDynamicEnumerationDataSource.h>

@class TMAPIClient, WFAppInstalledResource, NSString;

@interface WFTumblrPostAction : WFAction <WFDynamicEnumerationDataSource> {

	TMAPIClient* _client;
	WFAppInstalledResource* _appInstalledResource;

}

@property (nonatomic,readonly) TMAPIClient * client;                                     //@synthesize client=_client - In the implementation block
@property (nonatomic,retain) WFAppInstalledResource * appInstalledResource;              //@synthesize appInstalledResource=_appInstalledResource - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(TMAPIClient *)client;
-(void)runAsynchronouslyWithInput:(id)arg1 ;
-(void)initializeParameters;
-(BOOL)setParameterState:(id)arg1 forKey:(id)arg2 ;
-(id)possibleStatesForEnumeration:(id)arg1 ;
-(id)defaultSerializedRepresentationForEnumeration:(id)arg1 ;
-(id)enumeration:(id)arg1 localizedLabelForPossibleState:(id)arg2 ;
-(id)inputContentClasses;
-(WFAppInstalledResource *)appInstalledResource;
-(void)openFiles:(id)arg1 ;
-(void)openPostWithType:(id)arg1 withParameters:(id)arg2 ;
-(void)updateTagsParameterHidden;
-(BOOL)inputsMultipleItems;
-(void)setAppInstalledResource:(WFAppInstalledResource *)arg1 ;
@end

