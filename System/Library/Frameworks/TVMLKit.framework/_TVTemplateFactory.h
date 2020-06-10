/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:42:26 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/Frameworks/TVMLKit.framework/TVMLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSBundle;

@interface _TVTemplateFactory : NSObject {

	NSBundle* _tvmlKitBundle;

}
-(id)init;
-(void)registerProductTemplateURL:(id)arg1 forTemplateName:(id)arg2 includeParentStyleSheets:(BOOL)arg3 ;
-(void)_registerTemplateControllers;
-(void)_registerCustomAnimators;
-(id)_slideshowControllerWithElement:(id)arg1 ;
-(void)_registerStyleSheet:(id)arg1 forTemplate:(id)arg2 parentStyleSheets:(id)arg3 ;
@end

