/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:28:19 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/WiFiKit.framework/WiFiKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UITableViewController.h>

@protocol WFDiagnosticsProviderContext;
@class NSOrderedSet, WFNetworkSettingsCellFactory, WFHyperlinkFooterView;

@interface WFDiagnosticsTableViewController : UITableViewController {

	id<WFDiagnosticsProviderContext> _context;
	NSOrderedSet* _sections;
	WFNetworkSettingsCellFactory* _cellFactory;
	WFHyperlinkFooterView* _linkFooterView;

}

@property (nonatomic,retain) id<WFDiagnosticsProviderContext> context;                //@synthesize context=_context - In the implementation block
@property (nonatomic,retain) NSOrderedSet * sections;                                 //@synthesize sections=_sections - In the implementation block
@property (nonatomic,retain) WFNetworkSettingsCellFactory * cellFactory;              //@synthesize cellFactory=_cellFactory - In the implementation block
@property (nonatomic,retain) WFHyperlinkFooterView * linkFooterView;                  //@synthesize linkFooterView=_linkFooterView - In the implementation block
-(id<WFDiagnosticsProviderContext>)context;
-(void)setContext:(id<WFDiagnosticsProviderContext>)arg1 ;
-(NSOrderedSet *)sections;
-(id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2 ;
-(void)setSections:(NSOrderedSet *)arg1 ;
-(void)viewDidLoad;
-(void)_refresh;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(id)_defaultSections;
-(void)setCellFactory:(WFNetworkSettingsCellFactory *)arg1 ;
-(WFHyperlinkFooterView *)linkFooterView;
-(WFNetworkSettingsCellFactory *)cellFactory;
-(id)initWithDiagnosticsContext:(id)arg1 ;
-(void)setLinkFooterView:(WFHyperlinkFooterView *)arg1 ;
@end

