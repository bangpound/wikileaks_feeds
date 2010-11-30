# Wikileaks Cablegate Feeds importer

This feature module encapsulates a Feeds importer configuration and data table
definition.

## Dependencies

* [Feeds Fetcher directory](http://drupal.org/project/feeds_fetcher_directory)
* [Feeds QueryPath parser](http://drupal.org/project/feeds_querypath_parser)

## Usage

1. Download the archive of the full Cablegate web site. A torrent is linked from
   the bottom of http://cablegate.wikileaks.org/.
2. Open the archive and move the contents into your site's files directory.
3. Enable this module.
4. Visit the /import/wikileaks_cablegate path on your Drupal site.
5. Set up the configuration (below) and set the import directory to any
   subdirectory of the cables directory.

## Source Configuration

* CONTEXT: div.big
* SUBJECT: pre:eq(2)
* BODY: pre:eq(2)
* REFERENCE_ID: td:eq(1) a
* TIMESTAMP: td:eq(2) a
* HEADER: pre:eq(1)

## Known Issues

My use of Feeds Fetcher directory is slightly off base, because each file of the
directory is a unique feed item. Ordinarily, each batch would import multiple
items because each file would contain multiple items. For static HTML pages, the
files only contain one item. Therefore only one item will be created for each
cron task.

Feeds Fetcher directory maintains a list of files it has already processed in
the source configuration rather than using filenames as a unique target. Feeds'
periodic job scheduler will never refresh the items it has already imported
unless you check the "Re-fetch entire directory" checkbox. Likewise, it is
imperative that you keep the minimum refresh period (import_period) at "as often
as possible."

Parsing and mapping tags and sources are not implemented.
