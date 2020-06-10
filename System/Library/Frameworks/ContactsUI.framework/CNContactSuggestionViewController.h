/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:18:02 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UITableViewController.h>

@class CNPropertySuggestionAction, CNPropertyCell, SGOrigin, UILabel, NSString;

@interface CNContactSuggestionViewController : UITableViewController {

	CNPropertySuggestionAction* _action;
	CNPropertyCell* _propertyCell;
	SGOrigin* _origin;
	UILabel* _fromLabel;
	UILabel* _dateLabel;
	UILabel* _subjectLabel;
	UILabel* _contentLabel;
	NSString* _foundInAppName;

}

@property (nonatomic,retain) SGOrigin * origin;                                //@synthesize origin=_origin - In the implementation block
@property (nonatomic,retain) UILabel * fromLabel;                              //@synthesize fromLabel=_fromLabel - In the implementation block
@property (nonatomic,retain) UILabel * dateLabel;                              //@synthesize dateLabel=_dateLabel - In the implementation block
@property (nonatomic,retain) UILabel * subjectLabel;                           //@synthesize subjectLabel=_subjectLabel - In the implementation block
@property (nonatomic,retain) UILabel * contentLabel;                           //@synthesize contentLabel=_contentLabel - In the implementation block
@property (retain) NSString * foundInAppName;                                  //@synthesize foundInAppName=_foundInAppName - In the implementation block
@property (nonatomic,retain) CNPropertySuggestionAction * action;              //@synthesize action=_action - In the implementation block
@property (nonatomic,retain) CNPropertyCell * propertyCell;                    //@synthesize propertyCell=_propertyCell - In the implementation block
+(id)viewControllerWithOrigin:(id)arg1 ;
-(CNPropertySuggestionAction *)action;
-(void)setAction:(CNPropertySuggestionAction *)arg1 ;
-(SGOrigin *)origin;
-(void)setOrigin:(SGOrigin *)arg1 ;
-(double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(BOOL)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2 ;
-(void)viewDidLoad;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(UILabel *)contentLabel;
-(void)setFoundInAppName:(NSString *)arg1 ;
-(NSString *)foundInAppName;
-(void)updatePreview;
-(void)addToContact:(id)arg1 ;
-(void)ignore:(id)arg1 ;
-(void)showSource:(id)arg1 ;
-(CNPropertyCell *)propertyCell;
-(void)setPropertyCell:(CNPropertyCell *)arg1 ;
-(UILabel *)fromLabel;
-(void)setFromLabel:(UILabel *)arg1 ;
-(UILabel *)dateLabel;
-(void)setDateLabel:(UILabel *)arg1 ;
-(UILabel *)subjectLabel;
-(void)setSubjectLabel:(UILabel *)arg1 ;
-(void)setContentLabel:(UILabel *)arg1 ;
@end

