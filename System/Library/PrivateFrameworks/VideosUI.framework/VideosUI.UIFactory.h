/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:46:23 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/VUIWidgetCreator.h>
#import <libobjc.A.dylib/_TVInterfaceCreatingPrivate.h>
#import <libobjc.A.dylib/VUIDocumentCreator.h>

@interface VideosUI.UIFactory : NSObject <VUIWidgetCreator, _TVInterfaceCreatingPrivate, VUIDocumentCreator>
-(id)createPageControlViewWithNumberOfPages:(long long)arg1 type:(unsigned long long)arg2 currentPage:(long long)arg3 ;
-(id)_styleSheetURLForTemplate:(id)arg1 ;
-(id)URLForResource:(id)arg1 ;
-(id)imageForResource:(id)arg1 ;
-(id)_viewForIKElement:(id)arg1 existingView:(id)arg2 ;
-(id)_viewControllerForIKElement:(id)arg1 existingViewController:(id)arg2 ;
-(Class)_collectionViewCellClassForIKElement:(id)arg1 ;
-(void)_parseAppConfigurationForIKElement:(id)arg1 ;
-(id)_imageProxyForIKElement:(id)arg1 withLayout:(id)arg2 ;
-(id)viewControllerWithDocumentDataSource:(id)arg1 appContext:(id)arg2 viewElement:(id)arg3 documentOptions:(id)arg4 ;
-(id)init;
@end

