/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:45:42 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UITableViewController.h>

@class PKPrinter, NSArray;

@interface UIPrinterUtilityTableViewController : UITableViewController {

	PKPrinter* _printer;
	BOOL _showSupplyDataUnderPrinterName;
	long long _mainPrinterCellSection;
	long long _printerNameAndLocationSection;
	long long _identifyPrinterSection;
	long long _removeKeychainItemSection;
	NSArray* _supplyData;

}

@property (nonatomic,retain) NSArray * supplyData;              //@synthesize supplyData=_supplyData - In the implementation block
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)didReceiveMemoryWarning;
-(void)setShowContactingPrinter:(BOOL)arg1 ;
-(id)initWithPrinter:(id)arg1 ;
-(void)setSupplyData:(NSArray *)arg1 ;
-(NSArray *)supplyData;
@end

