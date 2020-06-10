/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:44:21 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/ShareSheet.framework/ShareSheet
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ShareSheet/UIActivity.h>
#import <libobjc.A.dylib/LSOpenResourceOperationDelegate.h>
#import <UIKit/UIManagedConfigurationRestrictableActivity.h>

@class NSString, NSURL, LSApplicationProxy, NSOperation, UIPrintInteractionController;

@interface UIOpenInIBooksActivity : UIActivity <LSOpenResourceOperationDelegate, UIManagedConfigurationRestrictableActivity> {

	BOOL _isContentManaged;
	BOOL _shouldUnlinkFile;
	NSString* _sourceApplicationBundleID;
	NSURL* _url;
	NSString* _applicationIdentifier;
	LSApplicationProxy* _applicationProxy;
	NSOperation* _operation;
	UIPrintInteractionController* _printInteractionController;

}

@property (nonatomic,retain) NSURL * url;                                                            //@synthesize url=_url - In the implementation block
@property (assign,nonatomic) BOOL shouldUnlinkFile;                                                  //@synthesize shouldUnlinkFile=_shouldUnlinkFile - In the implementation block
@property (nonatomic,retain) NSString * applicationIdentifier;                                       //@synthesize applicationIdentifier=_applicationIdentifier - In the implementation block
@property (nonatomic,retain) LSApplicationProxy * applicationProxy;                                  //@synthesize applicationProxy=_applicationProxy - In the implementation block
@property (nonatomic,retain) NSOperation * operation;                                                //@synthesize operation=_operation - In the implementation block
@property (nonatomic,retain) UIPrintInteractionController * printInteractionController;              //@synthesize printInteractionController=_printInteractionController - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) BOOL isContentManaged;                                                  //@synthesize isContentManaged=_isContentManaged - In the implementation block
@property (nonatomic,copy) NSString * sourceApplicationBundleID;                                     //@synthesize sourceApplicationBundleID=_sourceApplicationBundleID - In the implementation block
+(long long)activityCategory;
+(unsigned long long)_xpcAttributes;
+(id)bestJobNameForActivityItems:(id)arg1 ;
+(id)jobNameFormatForFile;
+(id)defaultJobName;
-(id)init;
-(void)_cleanup;
-(NSURL *)url;
-(NSOperation *)operation;
-(void)setOperation:(NSOperation *)arg1 ;
-(id)activityType;
-(void)setUrl:(NSURL *)arg1 ;
-(NSString *)applicationIdentifier;
-(void)setApplicationIdentifier:(NSString *)arg1 ;
-(NSString *)sourceApplicationBundleID;
-(void)setSourceApplicationBundleID:(NSString *)arg1 ;
-(LSApplicationProxy *)applicationProxy;
-(void)setApplicationProxy:(LSApplicationProxy *)arg1 ;
-(id)activityTitle;
-(BOOL)canPerformWithActivityItems:(id)arg1 ;
-(void)performActivity;
-(void)setIsContentManaged:(BOOL)arg1 ;
-(void)prepareWithActivityItems:(id)arg1 ;
-(void)openResourceOperation:(id)arg1 didFailWithError:(id)arg2 ;
-(void)openResourceOperationDidComplete:(id)arg1 ;
-(void)openResourceOperation:(id)arg1 didFinishCopyingResource:(id)arg2 ;
-(BOOL)isContentManaged;
-(long long)_defaultSortGroup;
-(BOOL)_appIsDocumentTypeOwner;
-(id)_bundleIdentifierForActivityImageCreation;
-(void)setPrintInteractionController:(UIPrintInteractionController *)arg1 ;
-(UIPrintInteractionController *)printInteractionController;
-(id)_loadedApplicationProxy;
-(void)_finishedCopyingResource:(BOOL)arg1 ;
-(BOOL)shouldUnlinkFile;
-(void)setShouldUnlinkFile:(BOOL)arg1 ;
-(void)_openDocumentWithApplication;
@end
