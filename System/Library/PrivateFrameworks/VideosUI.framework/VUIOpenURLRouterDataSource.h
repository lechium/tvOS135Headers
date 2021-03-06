/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:46:15 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray, VUIAction, NSString, NSDictionary;

@interface VUIOpenURLRouterDataSource : NSObject {

	BOOL _actionFirst;
	NSArray* _documentDataSources;
	VUIAction* _action;
	NSString* _tabIdentifier;
	NSDictionary* _localLibraryLink;
	NSString* _nativePageName;

}

@property (nonatomic,copy) NSArray * documentDataSources;                //@synthesize documentDataSources=_documentDataSources - In the implementation block
@property (nonatomic,retain) VUIAction * action;                         //@synthesize action=_action - In the implementation block
@property (nonatomic,retain) NSString * tabIdentifier;                   //@synthesize tabIdentifier=_tabIdentifier - In the implementation block
@property (nonatomic,copy) NSDictionary * localLibraryLink;              //@synthesize localLibraryLink=_localLibraryLink - In the implementation block
@property (nonatomic,retain) NSString * nativePageName;                  //@synthesize nativePageName=_nativePageName - In the implementation block
@property (assign,nonatomic) BOOL actionFirst;                           //@synthesize actionFirst=_actionFirst - In the implementation block
+(id)routerDataSourceWithDict:(id)arg1 appContext:(id)arg2 ;
-(VUIAction *)action;
-(void)setAction:(VUIAction *)arg1 ;
-(void)setTabIdentifier:(NSString *)arg1 ;
-(NSArray *)documentDataSources;
-(NSString *)nativePageName;
-(NSDictionary *)localLibraryLink;
-(BOOL)actionFirst;
-(void)setDocumentDataSources:(NSArray *)arg1 ;
-(void)setNativePageName:(NSString *)arg1 ;
-(void)setLocalLibraryLink:(NSDictionary *)arg1 ;
-(void)setActionFirst:(BOOL)arg1 ;
-(NSString *)tabIdentifier;
@end

