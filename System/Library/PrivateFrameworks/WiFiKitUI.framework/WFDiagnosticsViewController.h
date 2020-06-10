/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:27:56 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/WiFiKitUI.framework/WiFiKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UITableViewController.h>

@class NSString;

@interface WFDiagnosticsViewController : UITableViewController {

	BOOL _saving;
	/*^block*/id _saveHandler;
	NSString* _comment;

}

@property (nonatomic,copy) NSString * comment;              //@synthesize comment=_comment - In the implementation block
@property (nonatomic,copy) id saveHandler;                  //@synthesize saveHandler=_saveHandler - In the implementation block
@property (assign,nonatomic) BOOL saving;                   //@synthesize saving=_saving - In the implementation block
-(id)init;
-(NSString *)comment;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2 ;
-(void)setComment:(NSString *)arg1 ;
-(BOOL)saving;
-(void)viewDidLoad;
-(id)saveHandler;
-(void)setSaving:(BOOL)arg1 ;
-(void)setSaveHandler:(id)arg1 ;
@end

